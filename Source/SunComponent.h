/*
  ==============================================================================

    SunComponent.h
    Created: 29 Dec 2022 12:13:20pm
    Author:  Neti

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class SunComponent  : public juce::Component
{
public:
    SunComponent();
    ~SunComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SunComponent)
};
