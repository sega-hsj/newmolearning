//softInfo.h文件
#pragma once
#include<string>
using namespace std;
//定义命名空间 TaskManager
namespace TaskManager {
	using namespace System;
	using namespace::System::ComponentModel;
	using namespace::System::Collections;
	using namespace::System::Windows::Forms;
	using namespace::System::Data;
	using namespace::System::Drawing;

	public class Software {
	public:
		void setName(string n){ name = n;}
		string getName(){ return name;}
		void setType(int t){ type = t;}
		int getType() { return type;}
		void setPath(string p){ path = p;}
		string getPath(){ return path;}
		int getCount() { return count; }
	private:
		string name;
		int type;
		string path;
		static int count;

	};
	public class Game:public Software {
	public:

	};
	public class Design :public Software {

	};
	public class Office :public Software {

	};
	public class Mix :public Software {

	};

}
