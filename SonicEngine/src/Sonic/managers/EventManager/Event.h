#pragma once

#include <string>


namespace Sonic
{

	enum class EventType
	{
		None = 0,
		WindowClose, WindowScale, WindowMoved,
		KeyPressed, KeyReleased,
		MouseMoved, MouseScrolled, MouseButtonReleased, MouseButtonPressed
	};


	enum class EventCategory
	{
		None = 0,
		Window,
		Input,
		Keyboard,
		Mouse
	};

#pragma region Abstract classes according to interface segregation
	class Abs_GetEventType
	{
	public:
		virtual EventType GetEventType() const = 0;
	};


	class Abs_GetEventCategory
	{
	public:
		virtual int GetEventCategory() const = 0;
	};


	class Abs_GetEventName
	{
	public:
		virtual std::string GetEventName() const = 0;
	};
#pragma endregion

}