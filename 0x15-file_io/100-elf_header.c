#include "main.h"
#define ELF_MAGIC 0x7F454C46

int main(int argc, char *argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Usage: elf_header elf_filename\n");
    exit(98);
  }

  FILE *file = fopen(argv[1], "rb");
  if (file == NULL) {
    perror("fopen");
    exit(98);
  }

  // Seek to the start of the ELF header
  if (fseek(file, 0, SEEK_SET) != 0) {
    perror("fseek");
    exit(98);
  }

  // Read the ELF header
  struct elf_header header;
  if (fread(&header, sizeof(header), 1, file) != 1) {
    perror("fread");
    exit(98);
  }

  // Check if the file is an ELF file
  if (header.e_ident[0] != ELF_MAGIC) {
    fprintf(stderr, "Not an ELF file\n");
    exit(98);
  }

  // Print the ELF header information
  printf("Magic: 0x%08x\n", header.e_ident[0] | (header.e_ident[1] << 8) |
                                     (header.e_ident[2] << 16) |
                                     (header.e_ident[3] << 24));
  printf("Class: %d\n", header.e_ident[4]);
  printf("Data: %d\n", header.e_ident[5]);
  printf("Version: %d\n", header.e_ident[6] | (header.e_ident[7] << 8));
  printf("OS/ABI: %d\n", header.e_ident[8]);
  printf("ABI Version: %d\n", header.e_ident[9] | (header.e_ident[10] << 8));
  printf("Type: %d\n", header.e_type);
  printf("Entry point address: 0x%08x\n", header.e_entry);

  fclose(file);
  return 0;
}
