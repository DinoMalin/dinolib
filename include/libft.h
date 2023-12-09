/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcario <jcario@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 15:19:23 by jcario            #+#    #+#             */
/*   Updated: 2023/12/09 19:39:26 by jcario           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define TRUE 1
# define FALSE 0

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* ================================== IS =================================== */

/**
 @brief Checl if the character given is a digit.
 @param ch A character.
 @return 1 if the character is a digit, otherwise 0.
*/
int		ft_isdigit(int ch);

/**
 @brief Checl if the character given is a letter.
 @param ch A character.
 @return 1 if the character is a letter, otherwise 0.
*/
int		ft_isalpha(int ch);

/**
 @brief Checl if the character given is alphanumeric.
 @param ch A character.
 @return 1 if the character is alphanumeric, otherwise 0.
*/
int		ft_isalnum(int ch);

/**
 @brief Checl if the character given is in the ASCII table.
 @param ch A character.
 @return 1 if the character is ASCII, otherwise 0.
*/
int		ft_isascii(int ch);

/**
 @brief Checl if the character given is printable.
 @param ch A character.
 @return 1 if the character is printable, otherwise 0.
*/
int		ft_isprint(int ch);

/* ================================== MEM ================================== */

/**
 @brief Sets 'size' bytes of the memory to 'value'.
 @param pointer A pointer to the memory.
 @param value An byte.
 @param size A size.
 @return A pointer to the memory set.
*/
void	*ft_memset(void *pointer, int value, size_t size);

/**
 @brief Sets 'size' bytes of the memory to zero.
 @param pointer A pointer.
 @param size A size.
 @return A pointer to the memory that had been set.
*/
void	ft_bzero(void *pointer, size_t size);

/**
 @brief Copy the memory from a source to a destination.
 @param dst A pointer to the destination.
 @param src A pointer to the source.
 @param size A size.
 @return A pointer to the memory that had been copied.
*/
void	*ft_memcpy(void *dst, const void *src, size_t size);

/**
 @brief Copy the memory from a source to a destination,
 securizing the potentials overlaps.
 @param dst A pointer to the destination.
 @param src A pointer to the source.
 @param size A size.
 @return A pointer to the memory that had been moved.
*/
void	*ft_memmove(void *dst, const void *src, size_t size);

/**
 @brief Search for a given byte in a memory area.
 @param ptr A pointer.
 @param search A byte.
 @param size A size.
 @return A pointer to the memory found, NULL otherwise.
*/
void	*ft_memchr(const void *ptr, int search, size_t size);

/**
 @brief Compare two memory areas.
 @param ptr1 A pointer.
 @param ptr2 A pointer.
 @param size A size.
 @return 0 if the memory areas are identical, otherwise the difference between them.
*/
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t size);

/**
 @brief Allocate a memory area and set all its bytes to zero.
 @param count A pointer.
 @param size A size.
 @return A pointer to the memory that had been allocated.
*/
void	*ft_calloc(size_t count, size_t size);

/* ================================== STR ================================== */

/**
 @brief Evaluates the size of a string.
 @param str A string.
 @return The size of the string.
*/
size_t	ft_strlen(const char *str);

/**
 @brief Copy a source string to a destination buffer.
 @param dst A string.
 @param src A string.
 @param size A size.
 @return The size of the string the function tried to create.
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 @brief Concatenate a source string to a destination buffer.
 @param dst A string.
 @param src A string.
 @param size A size.
 @return The size of the string the function tried to create.
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 @brief Transform an uppercase to a lowercase.
 @param ch A character.
 @return A character in lowercase if the character given was a letter,
 otherwise the original character.
*/
int		ft_tolower(int ch);

/**
 @brief Transform a lowercase to an uppercase.
 @param ch A character.
 @return A character in uppercase if the character given was a letter,
 otherwise the original character.
*/
int		ft_toupper(int ch);

/**
 @brief Search for a specified character in a string.
 @param str A string.
 @param search A character.
 @return A pointer to the first occurence of the character in the string.
*/
char	*ft_strchr(char *str, int search);

/**
 @brief Search for a specified character in a string.
 @param str A string.
 @param search A character.
 @return A pointer to the last occurence of the character in the string.
*/
char	*ft_strrchr(char *str, int search);

/**
 @brief Compare two strings on a given size.
 @param str1 A string.
 @param str2 A string.
 @param size A size.
 @return 0 if the string are identical, otherwise the differences between them.
*/
int		ft_strncmp(char *str1, char *str2, size_t size);

/**
 @brief Search for a given string in another string.
 @param str A string.
 @param search A string.
 @param size A size.
 @return A pointer to the start of the string found in the source string,
 otherwise NULL.
*/
char	*ft_strnstr(char *str, char *search, size_t size);

/**
 @brief Transform a string into an int.
 @param str A string.
 @return An integer corresponding to the first digits of the string.
 If the string has more than one sign, or has letter before the digits,
 it return 0. The string can contain multiples whitespaces before the digits.
*/
int		ft_atoi(const char *str);

/**
 @brief Duplicate a given string.
 @param str A string.
 @return A pointer to a new string allocated in the memory that is identical
 to the source.
*/
char	*ft_strdup(char *str);

/**
 @brief Create a new string substracted from a given string at a given index.
 @param str A string.
 @param start An integer.
 @param len A size.
 @return The new string substracted from the source at the index start.
*/
char	*ft_substr(char const *src, unsigned int start, size_t len);

/**
 @brief Merge two strings in a new one.
 @param str1 A string.
 @param str2 A string.
 @return A pointer to the new string.
*/
char	*ft_strjoin(char const *str1, char const *str2);

/**
 @brief Trim all the characters included in a set from the start and the end of
 a string.
 @param str A string.
 @param set A string.
 @return A new string where the characters included in 'set' had been cut from
 the start and the end.
*/
char	*ft_strtrim(char const *str, char const *set);

/**
 @brief Split a string in multiples parts, given a separator.
 @param str A string.
 @param c A character.
 @return 0 if the string are identical, otherwise the differences between them.
*/
char	**ft_split(char const *str, char c);

/**
 @brief Transform an integer into a string.
 @param nb An integer.
 @return A new string allocated containing the digits that correspond to
 the integer given.
*/
char	*ft_itoa(int nb);

/**
 @brief Create a new string where each character from the old string is passed
 trough a function.
 @param str A string.
 @param f A function.
 @return A pointer to the new string.
*/
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));

/**
 @brief Iterate a function on each character of a given string.
 @param str A string.
 @param f A function.
*/
void	ft_striteri(char *str, void (*f)(unsigned int, char *));

/* ================================== PUT ================================== */

/**
 @brief Print a character on a defined file descriptor.
 @param ch A character.
 @param fd A file descriptor.
 @return The number of characters that the function has printed, always 1.
*/
int	ft_putchar_fd(char ch, int fd);

/**
 @brief Print a string on a defined file descriptor.
 @param str A string.
 @param fd A file descriptor.
 @return The len of the string.
*/
int	ft_putstr_fd(char *str, int fd);

/**
 @brief Print a string on a defined file descriptor, and
 put an endline at the end.
 @param str A string.
 @param fd A file descriptor.
 @return The len of the string and of the endline (strlen + 1).
*/
int	ft_putendl_fd(char *str, int fd);

/**
 @brief Print an integer on a defined file descriptor.
 @param n An integer.
 @param fd A file descriptor.
 @return The number of character that the function has printed.
*/
int	ft_putnbr_fd(int n, int fd);

/**
 @brief Print an unsigned integer on a defined file descriptor.
 @param n An unsigned integer.
 @param fd A file descriptor.
 @return The number of character that the function has printed.
*/
int	ft_putunbr_fd(unsigned int n, int fd);

/**
 @brief Print an integer converted into hexadecimal on a defined file
 descriptor. If 'upper' is true, then it will print in uppercase,
 otherwise in lowercase.
 @param n An integer.
 @param fd A file descriptor.
 @param up A boolean.
 @return The number of character that the function has printed.
*/
int	ft_puthexa_fd(unsigned long n, int fd, int upper);

/* ================================== LST ================================== */

/**
 @brief Create a new node.
 @param content The content of the new node.
 @return A new node.
*/
t_list	*ft_lstnew(void *content);

/**
 @brief Add a new element at the front of a list.
 @param lst The first node of the list.
 @param new A node.
*/
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 @brief Evaluates the size of a list.
 @param lst The first node of the list.
 @return The size of the list.
*/
int		ft_lstsize(t_list *lst);

/**
 @brief Find the last node of a list.
 @param lst The first node of the list.
 @return The last node of the list.
*/
t_list	*ft_lstlast(t_list *lst);

/**
 @brief Add a new element at the back of a list.
 @param lst The first node of the list.
 @param new A node.
*/
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 @brief Delete the content of a node and free it from the memory.
 @param lst A node.
 @param del A function.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 @brief Delete an entire list, freeing all the nodes from the memory.
 @param lst The first node of a list.
 @param del A function.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *));

/**
 @brief Iterate a function trough the contents of each node of a list.
 @param lst The first node of a list.
 @param f A function.
*/
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 @brief Create a new list where each node had been passed trough a function.
 @param lst The first node of a list.
 @param f A function.
 @param del A function to delete a node.
 @return A pointer to the first element of a new list. If there is an
 allocation error, all the nodes will be deleted with the del function
 then freed from the memory before ft_lstmap returns NULL.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 @brief A reimplementation of printf, works with cspdixX%.
 @param str A string.
 @param variadic Variadic arguments.
 @return The number of character that the function has printed
*/
int	ft_printf(const char *str, ...);

#endif