## Classes for generating and handling OHLC / Candlestick bars

Rationale: I often need to build bars from tick data. Sometimes it is for testing, other times it is part of the strategy.

These classes do just that. Feed in bars or ticks, and let the underlying objects handle the collection of bars. This is not a UI component, but could be used as the underlying datastore for such.

Design decisions:
- These classes are often used for testing. They are not tuned for performance. Some thought should go into this in case I want the ability to tune later.
- Many strategies handle multiple timeframes. The typical heriarchy is : Charts are a collection of bars. Charts receive ticks or bars and do the right thing.
- Things should be event driven. Some strategies need to know every tick, others any change in the bar properties, others are only interested in the bar close.

