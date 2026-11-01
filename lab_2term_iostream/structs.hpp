#include "headet.hpp"

namespace dls {
	const uint8_t NAME_LEN = 50;

	class StudentID {
	private:
		uint16_t ID = 0;
		char name[NAME_LEN]{};
		char surname[NAME_LEN]{};
		char fath[NAME_LEN]{};

		void to_copy(char* to ,std::string&  src)

	public:

		StudentID() = default;

		StudentID(uint16_t ID_, std::string& name_,  std::string& surname_, std::string& fath_ )
			:ID(ID_)
		{
			
		}

		uint16_t get_ID() {
			return ID;
		}

		char* get_name() {
			return name;
		}

		char* get_surname() {
			return surname;
		}

		char* get_fath() {
			return fath;
		}
	};
}