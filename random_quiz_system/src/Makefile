object_path = random_quiz.o fileOperation.o 

random_quiz: ${object_path}
	g++ -o random_quiz ${object_path}

object_path: fileOperation.h student.h question.h

# clean the middorn file and executable file
.PHONY: clean
clean:
	-rm *.o random_quiz 


