#include <stdio.h>

int main(int argc, const char *argv[]) {
	for(int i = 0; i != argc; ++i) {
		if(argv[i] == "-h" || argv[i] == "--help") {
			printf("            _   _ _           \n");
			printf("           | | (_) |          \n");
			printf("  ___  ___ | |_ _| | __ _ ___ \n");
			printf(" / __|/ _ \\| __| | |/ _` / __|\n");
			printf(" \\__ \\ (_) | |_| | | (_| \\__ \\\n");
			printf(" |___/\\___/ \\__|_|_|\\__,_|___/\n");
		}
	}
	return 0;
}