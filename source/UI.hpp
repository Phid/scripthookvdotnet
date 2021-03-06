#pragma once

#include "Vector3.hpp"

namespace GTA
{
	public enum class Font
	{
		ChaletLondon = 0,
		HouseScript = 1,
		Monospace = 2,
		ChaletComprimeCologne = 4,
		Pricedown = 7
	};
	public ref class Notification
	{
	public:
		void Hide();
	internal:
		Notification(int Handle);
	private:
		int mHandle;
	};
	public ref class UI sealed abstract
	{
	public:
		static const int WIDTH = 1280;
		static const int HEIGHT = 720;

		static Notification ^Notify(System::String ^msg){ return Notify(msg, false); }
		static Notification ^Notify(System::String ^msg, bool Blinking);

		static void ShowSubtitle(System::String ^msg);
		static void ShowSubtitle(System::String ^msg, int duration);

		static System::Drawing::Point WorldToScreen(Math::Vector3 position);
	};
}