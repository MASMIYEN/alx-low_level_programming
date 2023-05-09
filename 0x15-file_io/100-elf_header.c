#include "main.h"
/**
 * print_addr - prints address
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void print_addr(char *ptr)
{
	int m;
	int begin;
	char sys;

	printf("  Entry point address:               0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		begin = 26;
		printf("80");
		for (m = begin; m >= 22; m--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[m]);
			else if (ptr[m] < 0)
				printf("%x", 256 + ptr[m]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		begin = 26;
		for (m = begin; m > 23; m--)
		{
			if (ptr[m] >= 0)
				printf("%02x", ptr[m]);

			else if (ptr[m] < 0)
				printf("%02x", 256 + ptr[m]);
		}
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints OSABI
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - System V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);

	printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_ver - prints system version
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void print_ver(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}

/**
 * print_data - prints data
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void print_magic(char *ptr)
{
	int bytes;

	printf("  Magic:  ");

	for (bytes = 0; bytes < 16; bytes++)
		printf(" %02x", ptr[bytes]);

	printf("\n");
}

/**
 * check_sys - check the version system.
 * @ptr: regular pointer
 *
 * Return: Nothing :(
 */
void check_sys(char *ptr)
{
	char sys = ptr[4] + '0';

	if (sys == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (sys == '1')
		printf("  Class:                             ELF32\n");

	if (sys == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_ver(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - check if ELF file
 * @ptr: regular pointer
 *
 * Return: 1 if ELF file || 0 if not
 */
int check_elf(char *ptr)
{
	int addr = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (addr == 127 && E == 'E' && L == 'L' && F == 'F')
		return (0);
}

/**
 * main - check the code and main function btw
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_des, ret_read;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	file_des = open(argv[1], O_RDONLY);
	if (file_des < 0)
	{
		dprintf(STDERR_FILENO, "Error: file cannot be opened\n");
		exit(98);
	}
	lseek(file_des, 0, SEEK_SET);
	ret_read = read(file_des, ptr, 27);
	if (ret_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: It's not an ELF\n");
		exit(98);
	}
	check_sys(ptr);
	close(file_des);

	return (0);
}