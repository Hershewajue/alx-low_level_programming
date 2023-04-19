#include &quot;3-calc.h&quot;
#include &lt;stdlib.h&gt;
/**
* get_op_func - Selects the correct function to perform
* the operation asked by the user.
* @s: The operator passed as argument.
*
* Return: A pointer to the function corresponding
* to the operator given as a parameter.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{&quot;+&quot;, op_add},
{&quot;-&quot;, op_sub},
{&quot;*&quot;, op_mul},
{&quot;/&quot;, op_div},
{&quot;%&quot;, op_mod},
{NULL, NULL},
};
int i = 0;
while (ops[i].op != NULL &amp;&amp; *(ops[i].op) != *s)
i++;
return (ops[i].f);
}
