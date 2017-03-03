#include <libft.h>
#include <op.h>
#include <header.h>

static t_header		*st_get(void)
{
	static t_header		header = {0xEA83F3, {0}, 0, {0}};

	return (&header);
}

void				head_data(enum e_data data, char *code)
{
	unsigned int	i;
	unsigned int	j;
	t_header		*head;

	head = st_get();
	i = 0;
	while (code[i] != '"')
		++i;
	++i;
	j = 0;
	while (code[i + j] != '"')
		++j;
	code[i + j] = '\0';
	if (data == NAME)
		ft_strncpy(head->prog_name, &code[i], PROG_NAME_LENGTH);
	else if (data == COMMENT)
		ft_strncpy(head->comment, &code[i], COMMENT_LENGTH);
}

void				head_size(int size)
{
	t_header		*head;

	head = st_get();
	head->prog_size = size;
}

void				write_header(int fd)
{
	write(fd, (void*)st_get(), sizeof(t_header));
}
