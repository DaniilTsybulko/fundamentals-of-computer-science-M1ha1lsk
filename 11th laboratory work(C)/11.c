#include <stdio.h>
#include <stdbool.h>

int print(int d, int p)
{
    char *t, *r, *m;
    if (p == 0)
    { 	
	m = "";
    }
	else
    {
	m = "moins ";
    }
    printf("%s", m);
    if (d > 16 && d < 78)
    {
	if (d / 10 == 1)
	{
	    switch (d % 10)
	    {
		case 7:
		    printf("dix-sept\n");
		    break;
		case 8:
		    printf("dix-huit\n");
		    break;
		case 9:
		    printf("dix-neuf\n");
		    break;
		}
	    }
	else
	{
	    if (d / 10 == 7)
    	    {
		switch (d % 10)
	        {
		    case 0:
		        printf("soixante-dix\n");
		        break;
		    case 1:
		        printf("soixante et onze\n");
	    	        break;
		    case 2:
		        printf("soixante-douze\n");
		        break;
		    case 3:
		        printf("soixante-treize\n");
		        break;
		    case 4:
		        printf("soixante-quatorze\n");
		        break;    
    		    case 5:
		        printf("soixante-quinze\n");
		        break;
		    case 6:
		        printf("soixante-seize\n");
		        break;
		    case 7:
		        printf("soixante-dix-sept\n");
		        break;	
		}		
	    }
	    else
	    {
		switch (d % 10)
		{
		    case 0:
			t = "\n";
			break;
		    case 1:
			t = " et un\n";
			break;
		    case 2:
			t = "-deux\n";
			break;
		    case 3:
			t = "-trois\n";
			break;
		    case 4:
			t = "-quatre\n";
			break;
		    case 5:
			t = "-cinq\n";
			break;
		    case 6:
			t = "-six\n";
			break;
		    case 7:
			t = "-sept\n";
			break;
		    case 8:
			t = "-huit\n";	
			break;
		    case 9:
			t = "-neuf\n";
			break;	
		}
		switch (d / 10)
		{		
		    case 2:
			r = "vingt";
			break;
		    case 3:
			r = "trente";
			break;
		    case 4:
			r = "quarante";
			break;
		    case 5:
			r = "cinquante";
			break;
		    case 6:
			r = "soixante";
			break;
		}
		printf("%s", r);
		printf("%s", t);
	    }
	}
    }
    return 1;	
}

int main()
{
    int a, b, c, d, k, p;
    bool f;
    c = getchar();
    while (1)
    {
	f = true;
	k = 1;
	d = 0;
	p = 0;
	while (f = true)
	{
	    if (c-'0' == -16 || c-'0' == -38)
	    {
		if (d != 0)
		{
		    print(d, p);
		}
		k = 1;
		d = 0;
		p = 0;
	    }
	    else
	    {
		a = c-'0';
		if (k == 2)
		{
		    d = 0;	
		}
		else	
		{	
		    if (d > 0 && (c != ' ' || c != '\n'))
		    {	
			f = false;
		    }
		    else
		    {	
			if (k == 1)
			{
			    if (a == -3)
			    {
				k = 1;
				p = 1;
			    }
			    else
			    {
			        b = a*10;
				k = 0;
			    }
			}
			else
			{
			    d = b + a;
			    k = 2;
			}
		    }
		}
	    }
	    c = getchar();
	    if (c == EOF)
	    {
		print(d, p);	
		f = false;
		return 2;
		break;					
	    }
	}
    }
    return 0;
}
