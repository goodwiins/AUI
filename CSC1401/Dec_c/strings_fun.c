int str_len(char text[]) {
	int i = -1;
	while(text[++i] != '\0');
	return i;
}

