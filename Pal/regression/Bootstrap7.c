#include "pal.h"
#include "pal_regression.h"

int main(int argc, const char** argv) {
    pal_printf("User Program Started\n");

    /* find envp -- on stack right after all args (including argv[argc] = NULL) */
    const char** envp = &argv[argc + 1];

    for (int i = 0; envp[i]; i++)
        pal_printf("%s\n", envp[i]);

    return 0;
}
