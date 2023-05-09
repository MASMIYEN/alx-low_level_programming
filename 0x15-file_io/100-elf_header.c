#include "main.h"

/**
 *main - ELF program
 *
 *@argc: number of arguments
 *@argv: command line arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s<filename>\n", argv[0]);
		exit(1);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		exit(1);
	}

	Elf64_Ehdr elf_header;
	if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header))
	{
		perror("read");
		exit(1);
	}

	printf("ELF Header:\n");
	printf("  Magic: 0x%08x\n", elf_header.e_ident[EI_MAG0] |
		(elf_header.e_ident[EI_MAG1] << 8) |
		(elf_header.e_ident[EI_MAG2] << 16) |
		(elf_header.e_ident[EI_MAG3] << 24));
	printf("  Class: %d\n", elf_header.e_ident[EI_CLASS]);
	printf("  Data: %d\n", elf_header.e_ident[EI_DATA]);
	printf("  Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("  OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
	printf("  ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("  Type: %d\n", elf_header.e_type);
	printf("  Machine: %d\n", elf_header.e_machine);
	printf("  Version: %d\n", elf_header.e_version);
	printf("  Entry point: 0x%lx\n", elf_header.e_entry);
	printf("  Program header offset: 0x%lx\n", elf_header.e_phoff);
	printf("  Section header offset: 0x%lx\n", elf_header.e_shoff);
	printf("  Flags: 0x%x\n", elf_header.e_flags);
	printf("  Size of this header: %d\n", elf_header.e_ehsize);
	printf("  Size of program headers: %d\n", elf_header.e_phentsize);
	printf("  Number of program headers: %d\n", elf_header.e_phnum);
	printf("  Size of section headers: %d\n", elf_header.e_shentsize);
	printf("  Number of section headers: %d\n", elf_header.e_shnum);
	printf("  Section header string table index: %d\n", elf_header.e_shstrndx);

	close(fd);

	return 0;
}