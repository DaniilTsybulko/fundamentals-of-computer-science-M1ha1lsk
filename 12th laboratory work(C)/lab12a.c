#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
	char* buffer;
	size_t capacity;
 	size_t length;
} string;

int main ()
{
	int k, r, b;
	char t;
	printf("R or L?\n");
	scanf("%c\n", &t);
	r = 0;
	if (t == 'L')
	{
		int c = getchar();
		while (c-'0' != -38)
		{
			if (r == 0)
			{
				k = c-'0';
				r = 1;
			}
			int c = getchar();
			if (c-'0' != -38)
			{
				printf("%d", c-'0');
			}
			else
			{
				break;
			}
		}
		printf("%d\n", k);
		return 0;
	}
	if (t == 'R')
	{
		size_t capacity = 1 << 4;
  		size_t length = 0;
		char* str = malloc(capacity);
  		if (str == NULL) 
  		{
  	  		return 1;
  		}
  		while(1) 
  		{
    			char c = getchar();
    			if (c-'0' == -38)
    			{
    				b = k;
    				break;
    			}
    			length++;
    			if(length > capacity) 
    			{
      				capacity <<= 1;
      				char* new_str = realloc(str, capacity);
      				if (new_str == NULL) 
      				{ 
      					free(str);
        				return 1;
      				}
      				str = new_str;
    			}
    			str[length - 1] = c;
    			k = c-'0';
 		}
 		printf("%d", b);
  		for (int i =  0; i < length - 1; i++)
  		{
    			printf("%d", str[i]-'0');
    		}
    		free(str);
    		return 0;
  	}
}
			
