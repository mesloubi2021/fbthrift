// @generated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
// This file is probably not the place you want to edit!

//! Thrift error definitions for `module`.

/// Error definitions for `C`.
pub mod c {

    pub trait AsBang {
        fn as_bang(&self) -> ::std::option::Option<&crate::types::Bang>;
    }

    impl AsBang for ::anyhow::Error {
        fn as_bang(&self) -> ::std::option::Option<&crate::types::Bang> {
            for cause in self.chain() {
                if let ::std::option::Option::Some(ThingError::bang(e)) = cause.downcast_ref::<ThingError>() {
                    return ::std::option::Option::Some(e);
                }
            }
            ::std::option::Option::None
        }
    }

    pub type FError = ::fbthrift::NonthrowingFunctionError;


    pub(crate) enum FReader {}

    impl ::fbthrift::help::DeserializeExn for FReader {
        type Success = ();
        type Error = FError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Void, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::result::Result::Ok(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = ::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "FError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    pub type NumbersError = ::fbthrift::NonthrowingFunctionError;


    pub(crate) enum NumbersReader {}

    impl ::fbthrift::help::DeserializeExn for NumbersReader {
        type Success = ();
        type Error = NumbersError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Stream, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::result::Result::Ok(());
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::Void, 0i32), false) => {
                        once = true;
                        alt = ::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?);
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "NumbersError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(alt)
        }
    }

    pub type NumbersStreamError = ::fbthrift::NonthrowingFunctionError;

    pub(crate) enum NumbersStreamReader {}

    impl ::fbthrift::help::DeserializeExn for NumbersStreamReader {
        type Success = crate::types::number;
        type Error = NumbersStreamError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::Stream, 0),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::I32, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "NumbersStreamError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "NumbersStreamError"),
                )
                .into(),
            )
        }
    }

    /// Errors for thing (client side).
    #[derive(Debug)]
    pub enum ThingError {
        bang(crate::types::Bang),
        ApplicationException(::fbthrift::ApplicationException),
        ThriftError(::anyhow::Error),
    }

    /// Human-readable string representation of the Thrift client error.
    ///
    /// By default, this will not print the full cause chain. If you would like to print the underlying error
    /// cause, either use `format!("{:?}", anyhow::Error::from(client_err))` or print this using the
    /// alternate formatter `{:#}` instead of just `{}`.
    impl ::std::fmt::Display for ThingError {
        fn fmt(&self, f: &mut ::std::fmt::Formatter<'_>) -> ::std::result::Result<(), ::std::fmt::Error> {
            match self {
                Self::bang(inner) => {
                    if f.alternate() {
                        write!(f, "C::thing failed with variant `bang`: {:#}", inner)?;
                    } else {
                        write!(f, "C::thing failed with bang(Bang)")?;
                    }
                }
                Self::ApplicationException(inner) => {
                    write!(f, "C::thing failed with ApplicationException")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
                Self::ThriftError(inner) => {
                    write!(f, "C::thing failed with ThriftError")?;

                    if f.alternate() {
                      write!(f, ": {:#}", inner)?;
                    }
                }
            }

            ::std::result::Result::Ok(())
        }
    }

    impl ::std::error::Error for ThingError {
        fn source(&self) -> ::std::option::Option<&(dyn ::std::error::Error + 'static)> {
            match self {
                Self::bang(ref inner) => {
                    ::std::option::Option::Some(inner)
                }
                Self::ApplicationException(ref inner) => {
                    ::std::option::Option::Some(inner)
                }
                Self::ThriftError(ref inner) => {
                    ::std::option::Option::Some(inner.as_ref())
                }
            }
        }
    }

    impl ::std::convert::From<crate::types::Bang> for ThingError {
        fn from(e: crate::types::Bang) -> Self {
            Self::bang(e)
        }
    }

    impl AsBang for ThingError {
        fn as_bang(&self) -> ::std::option::Option<&crate::types::Bang> {
            match self {
                Self::bang(inner) => ::std::option::Option::Some(inner),
                _ => ::std::option::Option::None,
            }
        }
    }

    impl ::std::convert::From<::anyhow::Error> for ThingError {
        fn from(err: ::anyhow::Error) -> Self {
            Self::ThriftError(err)
        }
    }

    impl ::std::convert::From<::fbthrift::ApplicationException> for ThingError {
        fn from(ae: ::fbthrift::ApplicationException) -> Self {
            Self::ApplicationException(ae)
        }
    }

    impl ::std::convert::From<crate::services::c::ThingExn> for ThingError {
        fn from(e: crate::services::c::ThingExn) -> Self {
            match e {
                crate::services::c::ThingExn::ApplicationException(aexn) =>
                    ThingError::ApplicationException(aexn),
                crate::services::c::ThingExn::bang(exn) =>
                    ThingError::bang(exn),
            }
        }
    }

    impl ::std::convert::From<ThingError> for crate::services::c::ThingExn {
        fn from(err: ThingError) -> Self {
            match err {
                ThingError::bang(err) => crate::services::c::ThingExn::bang(err),
                ThingError::ApplicationException(aexn) => crate::services::c::ThingExn::ApplicationException(aexn),
                ThingError::ThriftError(err) => crate::services::c::ThingExn::ApplicationException(::fbthrift::ApplicationException {
                    message: err.to_string(),
                    type_: ::fbthrift::ApplicationExceptionErrorCode::InternalError,
                }),
            }
        }
    }

    pub(crate) enum ThingReader {}

    impl ::fbthrift::help::DeserializeExn for ThingReader {
        type Success = ::std::string::String;
        type Error = ThingError;

        fn read_result<P>(p: &mut P) -> ::anyhow::Result<::std::result::Result<Self::Success, Self::Error>>
        where
            P: ::fbthrift::ProtocolReader,
        {
            static RETURNS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("Success", ::fbthrift::TType::String, 0),
                ::fbthrift::Field::new("bang", ::fbthrift::TType::Struct, 1),
            ];
            let _ = p.read_struct_begin(|_| ())?;
            let mut once = false;
            let mut alt = ::std::option::Option::None;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), RETURNS)?;
                match ((fty, fid as ::std::primitive::i32), once) {
                    ((::fbthrift::TType::Stop, _), _) => {
                        p.read_field_end()?;
                        break;
                    }
                    ((::fbthrift::TType::String, 0i32), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Ok(::fbthrift::Deserialize::read(p)?));
                    }
                    ((::fbthrift::TType::Struct, 1), false) => {
                        once = true;
                        alt = ::std::option::Option::Some(::std::result::Result::Err(Self::Error::bang(::fbthrift::Deserialize::read(p)?)));
                    }
                    ((ty, _id), false) => p.skip(ty)?,
                    ((badty, badid), true) => return ::std::result::Result::Err(::std::convert::From::from(
                        ::fbthrift::ApplicationException::new(
                            ::fbthrift::ApplicationExceptionErrorCode::ProtocolError,
                            format!(
                                "unwanted extra union {} field ty {:?} id {}",
                                "ThingError",
                                badty,
                                badid,
                            ),
                        )
                    )),
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            alt.ok_or_else(||
                ::fbthrift::ApplicationException::new(
                    ::fbthrift::ApplicationExceptionErrorCode::MissingResult,
                    format!("Empty union {}", "ThingError"),
                )
                .into(),
            )
        }
    }

}

#[doc(inline)]
#[allow(ambiguous_glob_reexports)]
pub use self::c::*;

