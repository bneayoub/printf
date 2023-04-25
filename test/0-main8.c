#include "../main.h"

int main(void)
{
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus lacinia odio vitae vestibulum vestibulum. Cras porttitor metus justo, ut efficitur dolor tincidunt ut. "
				"Phasellus fringilla porttitor nisi, in mollis dui sagittis eu. Quisque at libero ut justo tempus varius. Fusce aliquet, ante vitae egestas faucibus, ligula neque consectetur tortor, "
				"vel elementum mi mauris ac enim. Suspendisse potenti. Curabitur ullamcorper fringilla luctus. Vestibulum id elit et velit scelerisque venenatis. Ut semper auctor urna, vel consequat nisi.";

	printf("-> LONG STRING CASE <-\n");
	printf("-------------------\n");
	
	_printf("man gcc: \n%s\n", str);

	return (0);
}
