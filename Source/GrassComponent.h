/*
  ==============================================================================

    GrassComponent.h
    Created: 27 Dec 2022 5:54:22pm
    Author:  Neti

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

//==============================================================================
/*
*/
class GrassComponent  : public juce::Component
{
public:
    GrassComponent();
    ~GrassComponent() override;

    void paint (juce::Graphics&) override;
    void resized() override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GrassComponent)
};
