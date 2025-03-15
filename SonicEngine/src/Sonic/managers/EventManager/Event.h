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


	class Event
	{
	public:
		virtual EventType GetEventType() const = 0;
		virtual EventCategory GetEventCategory() const = 0;
		virtual std::string GetEventName() const = 0;
	};

}