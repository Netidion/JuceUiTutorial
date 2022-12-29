/*
  ==============================================================================

    TextComponent.h
    Created: 29 Dec 2022 12:39:39pm
    Author:  Neti

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class TextComponent  : public juce::Component
{
public:
    TextComponent();
    ~TextComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TextComponent)
};
