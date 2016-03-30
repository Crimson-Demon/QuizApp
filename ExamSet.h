#include <vector> //for vector
#include <set> //for set
#include <string> //for string
#include <memory> //for shared_ptr
#include <ctime> //for time manipulations - test duration, question duration

/*IDEAS
-Interface for answers and questions - for exam sets one implementation, for tests another
-timer for test questions and whole test (seperate class)
-fluent interface
*/

//Answer structure holds answer details: id, correctness and text
typedef Struct AStruct {
  private:
    int id;
    bool correct;
    std::string text
} Answer;

//Question structure holds question id, text, corresponding answers and correct answers id
typedef Struct QStruct {
  private:
    int id;
    std::string text;
    std::set<std::shared_ptr<Answer>> answers;
    std::set<int> correctAnswersID;
} Question;

//Exam structure holds exam id and vector of questions
typedef Struct EStruct {
  //public methods
    ExamSet();
    ~ExamSet()
  private:
    int id;
    std::vector<std::shared_ptr<Question>> qVec;
} Exam;

//Test structure holds questions to a test
typedef Struct TStruct {
  private:
    int id;
    std::vector<std::pair<std::shared_ptr<Question>, bool>> qVec;
} Test;

//The Exam app structure holds all possible exams
typedef Struct EApp {
  private:
    std::set<Exam> eSet;
} App;
