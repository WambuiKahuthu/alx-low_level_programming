/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: @dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; src[y] ; y++)

		dest[x++] = src[y];

	return (dest);
}
