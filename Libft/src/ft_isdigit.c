#include "libft.h"

/**
 * @brief Check if the character is digit
 * 
 * @param c 
 * @return int 
 */
int ft_isdigit(int c) {
  if (c >= '0' && c <= '9')
    return (1);
  return (0);
}