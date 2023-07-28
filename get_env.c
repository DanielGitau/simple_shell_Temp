#include "main.h"
/**
 * _getenv - Function to retrieve the value of an environment variable
 * @name: The name of the environment variable to retrieve
 * Return: A pointer to the value of the environment variable,
 * or NULL if not found
 */
char *_getenv(char *name)
{
	char **env = environ;
	size_t name_len;
	
	if (name == NULL || name[0] == '\0' || environ == NULL)
		return (NULL);
	
	name_len = _strlen(name);
	
	for (; *env != NULL; env++)
	{
		if (_strncmp(name, *env, name_len) == 0 && (*env)[name_len] == '=')
			return (*env + name_len + 1);
	}
	return (NULL); 
}
