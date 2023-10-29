#include "factor.h"

/**
 * _factorize - The function factorize a number
 * @buffer: pointer to the address of the number
 *
 * Author: Thaoban Abdrasheed
 * Return: int
 */
int _factorize(char *buffer)
{

	u_int32_t _nm;
	u_int32_t r;

	_nm = atoi(buffer);


	for (r = 2; r < _nm; r++)
	{
		if (_nm % r == 0)
		{
			printf("%d=%d*%d\n",_nm,_nm/r,r);
			break;
		}
	}

return (0);
}
