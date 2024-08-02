# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from intera_core_msgs/HeadPanCommand.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class HeadPanCommand(genpy.Message):
  _md5sum = "5cb68e8755646564cf47813f91cee216"
  _type = "intera_core_msgs/HeadPanCommand"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 target              # radians for target, 0 str
float32 speed_ratio         # Percentage of max speed [0-1]
#
  float32 MAX_SPEED_RATIO = 1.0
  float32 MIN_SPEED_RATIO = 0.0
#
uint8   pan_mode  # set to one of constants below to change pan mode
# pan_mode possible states
  uint8   SET_PASSIVE_MODE = 0
  uint8   SET_ACTIVE_MODE = 1
  uint8   SET_ACTIVE_CANCELLATION_MODE = 2
  uint8   NO_MODE_CHANGE = 3
#
"""
  # Pseudo-constants
  MAX_SPEED_RATIO = 1.0
  MIN_SPEED_RATIO = 0.0
  SET_PASSIVE_MODE = 0
  SET_ACTIVE_MODE = 1
  SET_ACTIVE_CANCELLATION_MODE = 2
  NO_MODE_CHANGE = 3

  __slots__ = ['target','speed_ratio','pan_mode']
  _slot_types = ['float32','float32','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       target,speed_ratio,pan_mode

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(HeadPanCommand, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.target is None:
        self.target = 0.
      if self.speed_ratio is None:
        self.speed_ratio = 0.
      if self.pan_mode is None:
        self.pan_mode = 0
    else:
      self.target = 0.
      self.speed_ratio = 0.
      self.pan_mode = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_2fB().pack(_x.target, _x.speed_ratio, _x.pan_mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.target, _x.speed_ratio, _x.pan_mode,) = _get_struct_2fB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_2fB().pack(_x.target, _x.speed_ratio, _x.pan_mode))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 9
      (_x.target, _x.speed_ratio, _x.pan_mode,) = _get_struct_2fB().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2fB = None
def _get_struct_2fB():
    global _struct_2fB
    if _struct_2fB is None:
        _struct_2fB = struct.Struct("<2fB")
    return _struct_2fB
