#pragma once
#include "Requirements.hpp"

namespace Servo {
	//This servo construct and deconstruct the vkInstance object, it checks if all required extensions are avaliable and triggers the validation layers aswell
	class Instance
	{
	private:
		//vk::Instance& instance;
		vk::Instance instance;

		//Check if all required extensions are present for this aplication, if not throw an error
		void ValidateExtensions(const vector<char*>& extensions);

	public:	
		operator vk::Instance&();

		Instance();

		virtual ~Instance();
	};
};

