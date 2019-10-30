
#pragma once
#include "MainViewModel.g.h"

namespace winrt::Notepad::implementation
{
	struct MainViewModel : MainViewModelT<MainViewModel>
	{
		MainViewModel() = default;

		MainViewModel(Windows::Storage::FileProperties::DocumentProperties const& props, Windows::Storage::StorageFile const& textFile, hstring const& name, hstring const& type);
		Windows::Storage::StorageFile TextFile();
		Windows::Storage::FileProperties::DocumentProperties TextProperties();
		hstring Text();
		void Text(hstring const& value);
		hstring DocumentTitle();
		void DocumentTitle(hstring const& value);
		int32_t VCPosition();
		void VCPosition(int32_t value);
		int32_t HCPosition();
		void HCPosition(int32_t value);
		int32_t ZoomAmount();
		void ZoomAmount(int32_t value);
		winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
		void PropertyChanged(winrt::event_token const& token) noexcept;
	};
}
namespace winrt::Notepad::factory_implementation
{
	struct MainViewModel : MainViewModelT<MainViewModel, implementation::MainViewModel>
	{
	};
}
