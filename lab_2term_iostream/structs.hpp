#pragma once

#include <cstdint>
#include <cstring>
#include <string>


namespace dls {
	const uint8_t NAME_LEN = 50;

	class StudentID {
	private:
		uint32_t ID = {};
		char name[NAME_LEN]{};
		char surname[NAME_LEN]{};
		char fath[NAME_LEN]{};

		void to_copy(char* to, const std::string& src) {
			std::strncpy(to, src.c_str() , NAME_LEN - 1);
			to[NAME_LEN - 1] = '\0';
		}

	public:

		StudentID() = default;

		StudentID(uint32_t ID_,   const std::string& surname_, const std::string& name_, const std::string& fath_ )
			:ID(ID_)
		{
			to_copy(surname, surname_);
			to_copy(name, name_);
			to_copy(fath, fath_);
		}

		uint32_t get_ID()  const {return this->ID;}
		const char* get_name() const  {return this->name;}
		const char* get_surname() const  {return this->surname;}
		const char* get_fath() const {return this->fath;}

		void set_ID(uint32_t id) { this->ID = id; }
		void set_name(const std::string& str) { to_copy(this->name, str); }
		void set_surname(const std::string& str) { to_copy(this->surname, str); }
		void set_fath(const std::string& str) { to_copy(this->fath, str); }
	};

	class Student_grades {
	private:
		uint16_t group = {};
		uint32_t ID = {};
		uint16_t math = {};
		uint16_t geo = {};
		uint16_t prog = {};

	public:
		Student_grades() = default;

		Student_grades(uint16_t group_, uint32_t ID_, uint16_t math_, uint16_t geo_, uint16_t prog_)
			: group(group_), ID(ID_), math(math_), geo(geo_), prog(prog_) {
		}

		void set_id(uint32_t id) { this->ID = id; }
		void set_id(uint16_t g) { this->group = g; }
		void set_id(uint16_t ma) { this->math = ma; }
		void set_id(uint16_t geo) { this->geo = geo; }
		void set_id(uint16_t pro) { this->prog = pro; }

		uint32_t get_id() const { return this->ID; }
		uint16_t get_group() const { return this->group; }
		uint16_t get_math() const { return this->math; }
		uint16_t get_geo() const { return this->geo; }
		uint16_t get_prog() const { return this->prog; }
	};

	

}