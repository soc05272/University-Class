#include <stdio.h>

int main(void)
{
	int i = 1;
	
loop:
	
	printf("%d * %d = %d\n", 5, i, 5 * i);
	i++;
	if(i == 10) goto end;
	goto loop;
	
end:
		
	return 0; 
}
