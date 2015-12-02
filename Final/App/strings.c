void strings()
{
    char buf[BUFSIZ], * pLongest, * pCurrent;

        while ( printf("String: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n' ) {
            if ( ! ( pLongest = strtok(buf, DELIM) ) ) {
                fprintf(stderr, "String is empty!\n");
                continue;
            }
            while ( pCurrent = strtok(NULL, DELIM) )
                if ( strlen(pLongest) < strlen(pCurrent) )
                    pLongest = pCurrent;
            printf("First longest word: %s\n", pLongest);
        }

        return 0;
}
