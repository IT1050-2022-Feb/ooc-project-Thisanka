class systemDatabase
{
	private:
		char password[20];
		char userName[20];
	public:
	void setdisplayUserName(char p_word);
	void setDisplayPassword(char u_name);
	char getdisplayUserName();
	char getDisplayPassword();
	
};


	void systemDatabase::setdisplayUserName(char u_name)
	{
		userName=u_name;
	}
	char systemDatabase:: getdisplayUserName()
	{
		
		
		return userName[20];
	}
		void systemDatabase:: setDisplayPassword(char p_word)
		{
			password[20]=p_word;
		}
		
		char systemDatabase::getDisplayPassword()
		{
			return password;
		}
		// work class
		class works
{
	private: 
		int hours;
	public:
		
		int calcHours();
		void setdisplayWorkHours(int h);
		int getWorkHours();
		
		
		void works:: setdisplayWorkHours(int h)
		{
			hours=h;
		}
		
			int works:: getWorkHours()
			{
				return hours;
			}
			
		
		
