void printHugeInt (const HugeInt* hugeInt) {
    char* hugeIntString = HugeIntToString (hugeInt);
    printf ("%s\n", hugeIntString);
    free (hugeIntString);
}
