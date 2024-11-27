#include <stdio.h>
#include <syslog.h>

int main(int argc, char *argv[]) {

    openlog(NULL, 0, LOG_USER);

    if(argc != 3) {
        syslog(LOG_ERR, "Not enough command line arguments\n");
        return 1;
    }

    FILE* f_ptr = fopen(argv[1], "w");

    if(f_ptr == NULL) {
        syslog(LOG_ERR, "Error opening file: %s\n", argv[1]);
        return 1;
    }

    syslog(LOG_DEBUG, "Writings %s to file %s", argv[2], argv[1]);
    fprintf(f_ptr, "%s\n", argv[2]);
    
    fclose(f_ptr);

    closelog();
    return 0;
}