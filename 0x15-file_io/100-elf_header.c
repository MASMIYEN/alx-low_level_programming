#include "main.h"

#define ELF_MAGIC 0x7F454C46

/**
 * main - ELF program
 *
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	FILE *fp = fopen(argv[1], "rb");
	if (fp == NULL)
	{
		perror("fopen");
		exit(98);
	}

	// Seek to the beginning of the ELF header.
	if (lseek(fileno(fp), 0, SEEK_SET) != 0)
	{
		perror("lseek");
		exit(98);
	}

	// Read the ELF header.
	struct elf_header header;
	if (fread(&header, sizeof(header), 1, fp) != 1)
	{
		perror("fread");
		exit(98);
	}

	// Check if the file is an ELF file.
	if (header.e_ident[0] != ELF_MAGIC)
	{
		fprintf(stderr, "Not an ELF file.\n");
		exit(98);
	}

	// Print the information contained in the ELF header.
	printf("Magic: 0x%08x\n", header.e_ident[1] << 24 | header.e_ident[2] << 16 | header.e_ident[3] << 8 | header.e_ident[4]);
	printf("Class: %d\n", header.e_ident[5]);
	printf("Data: %d\n", header.e_ident[6]);
	printf("Version: %d\n", header.e_version);
	printf("OS/ABI: %s\n", header.e_osabi);
	printf("ABI Version: %d\n", header.e_abiversion);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%08x\n", header.e_entry);

	fclose(fp);

	return 0;
}