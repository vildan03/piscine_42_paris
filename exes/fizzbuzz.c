#include <unistd.h>

int digits(unsigned int a)
{
	int d =0;
	while(a != 0)
	{
		a = a/10;
		++d;
	}
return d;
}

void converter(unsigned int a, char *str)
{
	int d =digits(a);
	str[d] = '\0';
	while(d > 0)
	{
	str[d-1] ='0' +  a%10;
	--d;
	a = a/10;
	}
	
}

void fizz_buzz()
{       
	char str[10];
	int i =1;
	while(i <=100)
	{       
		if (i % 15 == 0)
		{
			write(1, "fizzbuzz", 8);
		}
		else if(i%3 == 0)
		{
			write(1,"fizz",4);
		}
		else if(i%5 == 0)
		{
			write(1,"buzz",4);
		}
		else
		{
			int d = digits(i);
			converter(i,str);
			write(1,&str,d);
		}
		write(1,"\n",1);
		++i;
	}
}

int main(void)
{
	fizz_buzz();
}
