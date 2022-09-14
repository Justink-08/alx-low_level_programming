#include <stdio.h>

/**
 * main - print triple combos
 *
 * Description - prints all possible combination of three digits numbers
 *
 * return: Always  (0) Success
 *
 */

 int main(void)
{
	int k, e, j;

	k=48;
	e=48;
        j=48;

	while (k < 58)

	{
		e = k + 1;
		while (e < 58)
	       {

		       j = e + 1;
		       while (j < 58)
		     {
			     putchar(k);
			     putchar(e);
			     putchar(j);
			     if (k < 55 || e < 56 || j < 57 )
			     {
			     
				     putchar(44);
				     putchar(32);
			     
			     }
			    
			     j++;
	
		      } 
		      
		       e++;
		
		} 
		
		k++;
	
	
	}

	putchar(10);

	return (0);


}
