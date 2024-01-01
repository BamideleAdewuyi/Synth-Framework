/*
  ==============================================================================

    SynthVoice.h
    Created: 14 Dec 2023 11:52:22pm
    Author:  Dele

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>
#include "SynthSound.h"

// Class represents a voice that a Synthesiser can use to play a SynthesiserSound.

class SynthVoice : public juce::SynthesiserVoice
{
public:
    // Pure virtual functions must be initialised
    // Must return true if this voice object is capable of playing the given sound.
    bool canPlaySound (juce::SynthesiserSound* sound)
    {

    }
    //============================================
    // Called to start a new note.
    void startNote (int midiNoteNumber, float velocity, juce::SynthesiserSound *sound, int currentPitchWheelPosition)
    {
        
    }
    //============================================
    // Called to stop a note.
    void stopNote (float velocity, bool allowTailOff)
    {
        
    }
    //============================================
    // Called to let the voice know that the pitch wheel has been moved.
    void pitchWheelMoved (int newPitchWheelValue)
    {
        
    }
    //============================================
    // Called to let the voice know that a midi controller has been moved.
    void controllerMoved (int controllerNumber, int newControllerValue)
    {
        
    }
    //============================================
    // Renders the next block of data for this voice.
    void renderNextBlock (juce::AudioBuffer< float > &outputBuffer, int startSample, int numSamples)
    {
        
    }
    //============================================
private:
    
    
};
