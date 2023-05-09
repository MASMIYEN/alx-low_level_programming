#include "main.h"
#define ELF_MAGIC 0x7F454C46

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
	struct elf_header header;
	FILE *fp = fopen(argv[1], "rb");

	if (argc != 2)
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
	return (1);

	if (fp == NULL)
		perror("fopen");
	return (1);

	if (lseek(fileno(fp), 0, SEEK_SET) != 0)
		perror("lseek");
	return (1);

	if (fread(&header, sizeof(header), 1, fp) != 1)
		perror("fread");
	return (1);

	if (header.e_ident[0] != ELF_MAGIC)
		fprintf(stderr, "Not an ELF file.\n");
	return (1);

	printf("Magic: 0x%08x\n",
		header.e_ident[1] << 24 | header.e_ident[2] << 16 |
		header.e_ident[3] << 8 | header.e_ident[4]);
	printf("Class: %d\n", header.e_ident[5]);
	printf("Data: %d\n", header.e_ident[6]);
	printf("Version: %d\n", header.e_version);
	printf("OS/ABI: %s\n", header.e_osabi);
	printf("ABI Version: %d\n", header.e_abiversion);
	printf("Type: %d\n", header.e_type);
	printf("Entry point address: 0x%08x\n", header.e_entry);

	fclose(fp);

	return (0);
}