
#include "pch.h"
#include "MainViewModel.h"
#include "MainViewModel.g.cpp"


namespace winrt::Notepad::implementation
{
	MainViewModel::MainViewModel(Windows::Storage::FileProperties::DocumentProperties const& props, Windows::Storage::StorageFile const& textFile, hstring const& name, hstring const& type)
	{
		throw hresult_not_implemented();
	}
	Windows::Storage::StorageFile MainViewModel::TextFile()
	{
		throw hresult_not_implemented();
	}
	Windows::Storage::FileProperties::DocumentProperties MainViewModel::TextProperties()
	{
		throw hresult_not_implemented();
	}
	hstring MainViewModel::Text()
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::Text(hstring const& value)
	{
		throw hresult_not_implemented();
	}
	hstring MainViewModel::DocumentTitle()
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::DocumentTitle(hstring const& value)
	{
		throw hresult_not_implemented();
	}
	int32_t MainViewModel::VCPosition()
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::VCPosition(int32_t value)
	{
		throw hresult_not_implemented();
	}
	int32_t MainViewModel::HCPosition()
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::HCPosition(int32_t value)
	{
		throw hresult_not_implemented();
	}
	int32_t MainViewModel::ZoomAmount()
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::ZoomAmount(int32_t value)
	{
		throw hresult_not_implemented();
	}
	winrt::event_token MainViewModel::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
	{
		throw hresult_not_implemented();
	}
	void MainViewModel::PropertyChanged(winrt::event_token const& token) noexcept
	{
		throw hresult_not_implemented();
	}
}
