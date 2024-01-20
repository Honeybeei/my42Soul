#include "libft.h"

/**
 * @brief Check if the character is alphabetic
 * 
 * @param c 
 * @return int 
 */
int ft_isalpha(int c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return (1);
  return (0);
}
