#include <stdio.h>
#include <stdlib.h>

int main(){
	float q1, q2, q3, q4, qavg, mid, curavg, final, exam;

	printf("welcome to my final exam minimum grade calculator v1.0\n");
	
	printf("what was your numerical grade for term 1?\n");
	scanf("%f",&q1);
	printf("what was your numerical grade for term 2?\n");
	scanf("%f",&q2);
	printf("what was your numerical grade for term 3?\n");
	scanf("%f",&q3);
	printf("what was your numerical grade for term 4?\n");
	scanf("%f",&q4);
	printf("what was your numerical grade for the midterm?\n");
	scanf("%f",&mid);
	printf("what do you want your over all grade to be, numerically speaking?\n");
	scanf("%f",&final);
	
	qavg = (q1 + q2 + q3 + q4)/4;
	curavg = qavg*0.8+ mid*0.1;
	exam = (final-curavg)/0.1;
	
	printf("you should get a %.2f on your final exam or higher.\n",exam);

	return 0;
}