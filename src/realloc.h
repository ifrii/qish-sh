#define QISH_RL_BUFSIZE 1024
char *qish_read_line(void)	{
	int bufsize	=	QISH_RL_BUFSIZE;
	int position=	0;
	char *buffer=	malloc(sizeof(char)*bufsize);
	int c;

if(!buffer)	{
			fprintf(stderr, "qish: erroneous allocation[!buffer]\n");
			exit(EXIT_FAILURE);
			}
while(1)	{
			//get char
			c	=	getchar();
			
			if(c==EOF||c=='\n')	{
						buffer[position]	=	'\0';
				return buffer;	}
			//wanna see some meme magic???
			else{buffer[position]=c;}position++;

			if(position>=bufsize)	{
							bufsize+=QISH_RL_BUFSIZE;
							buffer=realloc(buffer,bufsize);
							if(!buffer)	{
									fprintf(stderr,"qish: erroneous allocation[pos>=bufsize... !buffer]\n");
									exit(EXIT_FAILURE);
										}
									}
				}
							}
