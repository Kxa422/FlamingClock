; © 2020 by Kxa422

; ========================================
;                 LOCATION
; ========================================

[MeasureLocation]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#Location#
UpdateRate=600
LogSubstringErrors=0
DecodeCharacterReference=1
FinishAction=[!EnableMeasureGroup Location][!UpdateMeasureGroup Location]

[MeasureCountry]
Measure=WebParser
Url=[MeasureLocation]
StringIndex=5
Substitute="null":"",'"':""
Group=Location
Disabled=1

[MeasureCity]
Measure=WebParser
Url=[MeasureLocation]
StringIndex=7
Substitute="null":"",'"':""
Group=Location
Disabled=1


; ========================================
;             CURRENT WEATHER
; ========================================

[MeasureCurrentObservations]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#CurrentObservations#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Current][!UpdateMeasureGroup Current]

[MeasureIcon]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=1
Group=Current
Disabled=1

[MeasurePressure]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=3
Group=Current
Disabled=1

[MeasurePressureTrend]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=5
Group=Current
Disabled=1

[MeasureHumidity]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=6
Group=Current
Disabled=1

[MeasureTemperature]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=9
Group=Current
Disabled=1

[MeasureFeelsLike]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=11
Group=Current
Disabled=1

[MeasureuvDescription]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=12
Group=Current
Disabled=1

[MeasureUvIndex]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=13
Group=Current
Disabled=1

[MeasureUpdate]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=14
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"
Group=Current
Disabled=1

[MeasureVisibility]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=15
Group=Current
Disabled=1

[MeasureWindDirection]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=16
Group=Current
Disabled=1

[MeasureWindSpeed]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=18
Substitute="\u002F":"/"
Group=Current
Disabled=1

[MeasureCondition]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=19
DecodeCharacterReference=1
Substitute="\u002F":"/"
Group=Current
Disabled=1

[MeasureUpdateTimeZone]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#UpdateTimeZone#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup UpdateTimeZone][!UpdateMeasureGroup UpdateTimeZone]

[MeasureUpdateTimeZoneAbbrev]
Measure=WebParser
Url=[MeasureUpdateTimeZone]
StringIndex=1
Group=UpdateTimeZone
Disabled=1

[MeasuresunriseTimeLocal]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=7
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocal]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=8
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[Measureprecip1Hour]
Measure=WebParser
Url=[MeasureCurrentObservations]
StringIndex=2
Group=Current
Disabled=1

; ========================================
;         WEATHER PARAMETERS LABELS
; ========================================


[MeasureWeatherParametersLabels]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#WeatherParametersLabels#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Labels][!UpdateMeasureGroup Labels]

[MeasureFeelsLikeLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=1
Group=Labels
Disabled=1

[MeasureWindLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=3
Group=Labels
Disabled=1

[MeasureHumidityLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=4
Group=Labels
Disabled=1

[MeasurePressureLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=6
Group=Labels
Disabled=1

[MeasureVisibilityLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=8
Group=Labels
Disabled=1

[MeasureUvLabels]
Measure=WebParser
Url=[MeasureWeatherParametersLabels]
StringIndex=7
Group=Labels
Disabled=1

; ========================================
;          WEATHER PARAMETERS UNITS
; ========================================


[MeasureWeatherParametersUnits]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#WeatherParametersUnits#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Units][!UpdateMeasureGroup Units]

[MeasureMph]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=1
Substitute="\u002F":"/"
Group=Units
Disabled=1

[MeasureKmh]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=2
Substitute="\u002F":"/"
Group=Units
Disabled=1

[MeasureIn]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=3
Group=Units
Disabled=1

[MeasureMb]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=4
Group=Units
Disabled=1

[MeasureMile]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=5
Group=Units
Disabled=1

[MeasureKm]
Measure=WebParser
Url=[MeasureWeatherParametersUnits]
StringIndex=6
Group=Units
Disabled=1

; ========================================
;             Forecast
; ========================================

[MeasureForecast]
Measure=WebParser
Url=#URL#
UserAgent=Mozilla/5.0 (Linux; Android 10; Pixel 4) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.61 Mobile Safari/537.36
;ForceReload=1
RegExp=#Forecast#
UpdateRate=600
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Current][!UpdateMeasureGroup Current]

[IconDay2]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=43
Group=Current
Disabled=1

[MeasureForecastDay2]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=2
Group=Current
Disabled=1

[MeasureNarativeDay2]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=9
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay2]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=18
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay2]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=26
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay3]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=45
Group=Current
Disabled=1

[MeasureForecastDay3]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=3
Group=Current
Disabled=1

[MeasureNarativeDay3]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=10
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay3]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=19
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay3]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=27
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay4]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=47
Group=Current
Disabled=1

[MeasureForecastDay4]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=4
Group=Current
Disabled=1

[MeasureNarativeDay4]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=11
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay4]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=20
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay4]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=28
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay5]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=49
Group=Current
Disabled=1

[MeasureForecastDay5]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=5
Group=Current
Disabled=1

[MeasureNarativeDay5]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=12
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay5]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=21
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay5]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=29
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay6]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=51
Group=Current
Disabled=1

[MeasureForecastDay6]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=6
Group=Current
Disabled=1

[MeasureNarativeDay6]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=13
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay6]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=22
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay6]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=30
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay7]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=53
Group=Current
Disabled=1

[MeasureForecastDay7]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=7
Group=Current
Disabled=1

[MeasureNarativeDay7]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=14
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay7]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=23
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay7]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=31
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[IconDay8]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=55
Group=Current
Disabled=1

[MeasureForecastDay8]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=8
Group=Current
Disabled=1

[MeasureNarativeDay8]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=15
Group=Current
Disabled=1
Substitute="\u00BAC":" °"

[MeasuresunriseTimeLocalDay8]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=24
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

[MeasuresunsetTimeLocalDay8]
Measure=WebParser
Url=[MeasureForecast]
StringIndex=32
Group=Current
Disabled=1
RegExpSubstitute=1
Substitute="^.*T(.*):.*$":"\1"

; © 2020 by Kxa422
