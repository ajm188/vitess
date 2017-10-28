# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: tableacl.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='tableacl.proto',
  package='tableacl',
  syntax='proto3',
  serialized_pb=_b('\n\x0etableacl.proto\x12\x08tableacl\"A\n\x1cTableGroupCallerIDSecretSpec\x12\x11\n\tcaller_id\x18\x01 \x01(\t\x12\x0e\n\x06secret\x18\x02 \x01(\t\"\xb4\x01\n\x0eTableGroupSpec\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x1f\n\x17table_names_or_prefixes\x18\x02 \x03(\t\x12\x0f\n\x07readers\x18\x03 \x03(\t\x12\x0f\n\x07writers\x18\x04 \x03(\t\x12\x0e\n\x06\x61\x64mins\x18\x05 \x03(\t\x12\x41\n\x11\x63\x61ller_id_secrets\x18\x06 \x03(\x0b\x32&.tableacl.TableGroupCallerIDSecretSpec\"8\n\x06\x43onfig\x12.\n\x0ctable_groups\x18\x01 \x03(\x0b\x32\x18.tableacl.TableGroupSpecb\x06proto3')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_TABLEGROUPCALLERIDSECRETSPEC = _descriptor.Descriptor(
  name='TableGroupCallerIDSecretSpec',
  full_name='tableacl.TableGroupCallerIDSecretSpec',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='caller_id', full_name='tableacl.TableGroupCallerIDSecretSpec.caller_id', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='secret', full_name='tableacl.TableGroupCallerIDSecretSpec.secret', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=28,
  serialized_end=93,
)


_TABLEGROUPSPEC = _descriptor.Descriptor(
  name='TableGroupSpec',
  full_name='tableacl.TableGroupSpec',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='tableacl.TableGroupSpec.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='table_names_or_prefixes', full_name='tableacl.TableGroupSpec.table_names_or_prefixes', index=1,
      number=2, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='readers', full_name='tableacl.TableGroupSpec.readers', index=2,
      number=3, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='writers', full_name='tableacl.TableGroupSpec.writers', index=3,
      number=4, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='admins', full_name='tableacl.TableGroupSpec.admins', index=4,
      number=5, type=9, cpp_type=9, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='caller_id_secrets', full_name='tableacl.TableGroupSpec.caller_id_secrets', index=5,
      number=6, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=96,
  serialized_end=276,
)


_CONFIG = _descriptor.Descriptor(
  name='Config',
  full_name='tableacl.Config',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='table_groups', full_name='tableacl.Config.table_groups', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=278,
  serialized_end=334,
)

_TABLEGROUPSPEC.fields_by_name['caller_id_secrets'].message_type = _TABLEGROUPCALLERIDSECRETSPEC
_CONFIG.fields_by_name['table_groups'].message_type = _TABLEGROUPSPEC
DESCRIPTOR.message_types_by_name['TableGroupCallerIDSecretSpec'] = _TABLEGROUPCALLERIDSECRETSPEC
DESCRIPTOR.message_types_by_name['TableGroupSpec'] = _TABLEGROUPSPEC
DESCRIPTOR.message_types_by_name['Config'] = _CONFIG

TableGroupCallerIDSecretSpec = _reflection.GeneratedProtocolMessageType('TableGroupCallerIDSecretSpec', (_message.Message,), dict(
  DESCRIPTOR = _TABLEGROUPCALLERIDSECRETSPEC,
  __module__ = 'tableacl_pb2'
  # @@protoc_insertion_point(class_scope:tableacl.TableGroupCallerIDSecretSpec)
  ))
_sym_db.RegisterMessage(TableGroupCallerIDSecretSpec)

TableGroupSpec = _reflection.GeneratedProtocolMessageType('TableGroupSpec', (_message.Message,), dict(
  DESCRIPTOR = _TABLEGROUPSPEC,
  __module__ = 'tableacl_pb2'
  # @@protoc_insertion_point(class_scope:tableacl.TableGroupSpec)
  ))
_sym_db.RegisterMessage(TableGroupSpec)

Config = _reflection.GeneratedProtocolMessageType('Config', (_message.Message,), dict(
  DESCRIPTOR = _CONFIG,
  __module__ = 'tableacl_pb2'
  # @@protoc_insertion_point(class_scope:tableacl.Config)
  ))
_sym_db.RegisterMessage(Config)


import grpc
from grpc.beta import implementations as beta_implementations
from grpc.beta import interfaces as beta_interfaces
from grpc.framework.common import cardinality
from grpc.framework.interfaces.face import utilities as face_utilities
# @@protoc_insertion_point(module_scope)
