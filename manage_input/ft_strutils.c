#include "../push_swap.h"

//function that returns the size of the string
size_t ft_strlen(const char *a) {
    size_t i = 0;
    while (a[i])
        i++;
    return i;
}

//function that returns the duplicates of given string but in different address
char	*ft_strdup(const char *src)
{
	size_t	len;
	char	*cpy;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	cpy = (char *)malloc(len + 1);
	if (!cpy)
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

//function that returns the string merged
char *ft_strjoin(char const *s1, char const *s2) {
    char *result;
    size_t i = 0;
    if (!s1 || !s2)
        return NULL;
    result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 2); // 공백이 추가되므로 +2
    if (!result)
        return NULL;

    while (i < ft_strlen(s1)) {
        result[i] = s1[i];
        i++;
    }
    result[i] = ' ';
    i = 0;
    while (i < ft_strlen(s2)) {
        result[i + ft_strlen(s1) + 1] = s2[i]; // 구분자 공백을 추가했으므로 인덱스 조정
        i++;
    }
    result[i + ft_strlen(s1) + 1] = '\0';
    return result;
}

//function that compares two string and returns the differnce
int ft_strcmp(const char *s1, const char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] == s2[i] && s1[i] && s2[i])
        i++;
    return (s1[i] - s2[i]);
}