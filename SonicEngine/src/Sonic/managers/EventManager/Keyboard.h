#pragma once

#include "Event.h"


namespace Sonic
{

	class KeyEvent : public Abs_GetEventCategory
	{
	public:
		virtual int GetEventCategory() const override
		{
			return static_cast<int>(EventCategory::Input)
				| static_cast<int>(EventCategory::Keyboard);
		}
	};


	class KeyPressed : public Abs_GetEventType,
					   public Abs_GetEventName, 
					   public KeyEvent
	{
	public:
		virtual EventType GetEventType() const override
		{
			return EventType::KeyPressed;
		}

		virtual std::string GetEventName() const override
		{
			return "key pressed event";
		}
	};


	class KeyReleased : public Abs_GetEventType, 
						public Abs_GetEventName, 
						public KeyEvent
	{
	public:
		virtual EventType GetEventType() const override
		{
			return EventType::KeyReleased;
		}

		virtual std::string GetEventName() const override
		{
			return "key released event";
		}
	};

}