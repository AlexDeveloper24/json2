#include <nlohmann/json.hpp>
#include <iostream>
#include <string>

using json = nlohmann::json;

int main() {
	const char * const json_data = R"(
{
    "lastname" : "Ivanov",
    "firstname" : "Ivan",
    "age" : 25,
    "islegal" : false,
    "marks" : [
    	4,5,5,5,2,3
    ],
    "address" : {
    	"city" : "Moscow",
        "street" : "Vozdvijenka"
    }
})";
}