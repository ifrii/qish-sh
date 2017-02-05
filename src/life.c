int main(int argc, char **argv)	{
		//confloader
	0;
		//loop
	qish_loop();

		//shutdown
	return	EXIT_YES;			}

void qish_loop(void)			{
	char	*line;
	char	**args;
	int		status;

	do		{
			printf("``: ");
			line	=	qish_read_line();
			args	=	qish_split_line(line);
			status	=	qish_execute(args);

			free(line);
			free(args);
			}
	
	while(status);
}
