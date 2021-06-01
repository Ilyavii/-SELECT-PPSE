#include "header.h"

int	ft_atoi(const char c1, const char c2)
{
	int out_int;

	out_int = (c1 - '0') * 10  + (c2 - '0');
	return (out_int);
}

int len(char *s)
{
    int i;
    
    i = 0;
    while (s && s[i] != '\0')
        i++;
    return (i);
}

void find_RID_and_PIX(char *reply_card)
{
    int i, j;
	int len_data;
    int len_reply_card = len(reply_card);
    
    for(i = 0; i < len_reply_card; i++)
    {
        if (reply_card[i] == '4' && reply_card[i+1] == 'F' && i+3 < len_reply_card){
			i  += 2;
			len_data = ft_atoi(reply_card[i], reply_card[i+1]) * 2;
			i  += 2;
			printf("\n\nRID && PIX \n");
			for (j = 0; j < len_data && i < len_reply_card; j++){
				if (j == 5*2)
					printf(" && ");
				printf("%c", reply_card[i]);
				i++;
			}
			
		}
    }
	printf("\n");
    return ;
}
