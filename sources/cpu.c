#include "cpu.h"

t_process				cpu(t_process process, char memory[MEM_SIZE])
{
	struct s_arg		arg;
	int					read_arg[4];

	if (process.pc == 1 && process.nb_cycle >= 10)
		apply_live(&process, process.memory);
	else if (process.pc == 2 && process.nb_cycle >= 5)
		apply_ld(&process, process.memory, arg);
	else if (process.pc == 3 && process.nb_cycle >= 5)
		apply_st(&process, arg);
	else if (process.pc == 4 && process.nb_cycle >= 10)
		apply_add(&process, process.memory, arg);
	else if (process.pc == 5 && process.nb_cycle >= 10)
		apply_and(&process, process.memory, arg);
	else if (process.pc == 6 && process.nb_cycle >= 6)
		apply_and(&process, process.memory, arg);
	else if (process.pc == 7 && process.nb_cycle >= 6)
		apply_or(&process, process.memory, arg);
	else if (process.pc == 8 && process.nb_cycle >= 6)
		apply_xor(&process, process.memory, arg);
	else if (process.pc == 9 && process.nb_cycle >= 20)
		apply_zjmp(&process, process.memory, arg);
	else if (process.pc == 10 && process.nb_cycle >= 25)
		apply_ldi(&process, process.memory, arg);
	else if (process.pc == 11 && process.nb_cycle >= 25)
		apply_sti(&process, arg);
	else if (process.pc == 12 && process.nb_cycle >= 800)
		apply_fork(&process, arg);
	else if (process.pc == 13 && process.nb_cycle >= 10)
		apply_lld(&process, process.memory, arg);
	else if (process.pc == 14 && process.nb_cycle >= 50)
		apply_lldi(&process, process.memory, arg);
	else if (process.pc == 15 && process.nb_cycle >= 1000)
		apply_lfork(&process, arg);
	else if (process.pc == 16)
		apply_aff(&process, process.memory, arg);
	return (process);
}