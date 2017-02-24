#include "../../includes/cpu.h"

/*or : Cette oprocessération est un OU bit-à-bit, suivant le même processrinciprocesse que and, son
 * oprocesscode est donc évidemment 7.
 */

void                apply_or(t_process *process, char memory[MEM_SIZE], struct s_arg arg)
{
	int				i;
	uint32_t		first;
	uint32_t		second;
	uint32_t		reg;

	i = 0;
	first = 0;
	while (i < arg.total_to_read[0])
	{
		first += memory[PCANDARG + i];
		i++;
	}
	second = 0;
	while (i < arg.total_to_read[0] + arg.total_to_read[1])
	{
		second += memory[PCANDARG + i];
		i++;
	}
	reg = 0;
	while (i < arg.total_to_read[0] + arg.total_to_read[1] + arg.total_to_read[2])
	{
		reg += memory[PCANDARG + i];
		i++;
	}
	process->reg[reg] = (first | second);
	process->carry = 1;
}
